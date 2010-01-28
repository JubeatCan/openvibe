	!include "MUI.nsh"
	!include "zipdll.nsh"

	;Name and file
	Name "OpenViBE x.x.x"
	OutFile "openvibe-x.x.x-svnXXXX-setup.exe"

	;Default installation folder
	InstallDir "$PROGRAMFILES\openvibe"
	Var OLDINSTDIR

;Interface Settings

	!define MUI_ABORTWARNING

;Pages

	!insertmacro MUI_PAGE_WELCOME
	!insertmacro MUI_PAGE_LICENSE "..\COPYING"
	!insertmacro MUI_PAGE_DIRECTORY
	!insertmacro MUI_PAGE_INSTFILES
	!insertmacro MUI_PAGE_FINISH

	!insertmacro MUI_UNPAGE_WELCOME
	!insertmacro MUI_UNPAGE_CONFIRM
	!insertmacro MUI_UNPAGE_INSTFILES
	!insertmacro MUI_UNPAGE_FINISH

;Languages

	!insertmacro MUI_LANGUAGE "English"

;Installer and uninstaller icons

	Icon "${NSISDIR}\Contrib\Graphics\Icons\box-install.ico"
	UninstallIcon "${NSISDIR}\Contrib\Graphics\Icons\box-uninstall.ico"

;##########################################################################################################################################################
;##########################################################################################################################################################
;##########################################################################################################################################################

Function .onInit

	UserInfo::GetAccountType
	Pop $R1
	StrCmp $R1 "Admin" has_admin_rights 0
		MessageBox MB_OK "You must be administrator to install OpenViBE"
		Quit
has_admin_rights:

	ReadRegStr $0 HKLM SOFTWARE\openvibe InstallDir

	${If} $0 != ""
		IfFileExists "$0\Uninstall.exe" +1 +5
			MessageBox MB_YESNO "A previous installation of OpenViBE is installed under $0.$\nContinuing the install procedure will remove previous installation of OpenViBE (including all files you eventually added in the installation directory).$\nWould you like to accept this removal and continue on installation process ?" IDNO +1 IDYES +2
			Abort
		StrCpy $OLDINSTDIR $0
		StrCpy $INSTDIR $0
	${EndIf}

FunctionEnd

;##########################################################################################################################################################
;##########################################################################################################################################################
;##########################################################################################################################################################

Section "-OpenViBE"

	${If} $OLDINSTDIR != ""
		RMDir /r $OLDINSTDIR
		RMDir /r "$SMPROGRAMS\OpenViBE"
	${EndIf}

	SetOutPath $INSTDIR
	WriteRegStr HKLM "SOFTWARE\openvibe" "InstallDir" "$INSTDIR"
	WriteUninstaller Uninstall.exe

	CreateDirectory "$INSTDIR\dependencies\arch"

	SetOutPath "$INSTDIR\dependencies"
	IfFileExists "$SYSDIR\d3dx9_38.dll" no_need_to_install_directx
	IfFileExists "arch\openvibe-directx.exe" no_need_to_download_directx
	NSISdl::download "http://www.microsoft.com/downloads/info.aspx?na=90&p=&SrcDisplayLang=en&SrcCategoryId=&SrcFamilyId=04ac064b-00d1-474e-b7b1-442d8712d553&u=http%3a%2f%2fdownload.microsoft.com%2fdownload%2fB%2f7%2f9%2fB79FC9D7-47B8-48B7-A75E-101DEBEB5AB4%2fdirectx_aug2009_redist.exe" "arch\openvibe-directx.exe"
	Pop $R0 ; Get the return value
		StrCmp $R0 "success" +3
			MessageBox MB_OK "Download failed: $R0$\nDirect X won't be installed and 3D functionalities won't be available...$\nYou can install DirectX later to enable 3D functionalities !"
			Goto no_need_to_install_directx ; Quit
no_need_to_download_directx:
	ExecWait '"arch\openvibe-directx.exe" /T:"$INSTDIR\tmp" /Q'
	ExecWait '"$INSTDIR\tmp\DXSETUP.exe" /silent'
no_need_to_install_directx:


	SetOutPath "$INSTDIR\dependencies\arch"
	File ..\dependencies\arch\openvibe-vcredist-2005-sp1.exe
	File ..\dependencies\arch\openvibe-vcredist-2008-sp1.exe


	SetOutPath "$INSTDIR\dependencies"
	IfFileExists "arch\openvibe-vcredist-2005-sp1.exe" no_need_to_download_vcredist_2005_sp1
	NSISdl::download "http://download.microsoft.com/download/a/3/7/a379292d-24f2-4bbb-841b-c2aeb1100471/vcredist_x86.exe" "arch\openvibe-vcredist-2005-sp1.exe"
	Pop $R0 ; Get the return value
		StrCmp $R0 "success" +3
			MessageBox MB_OK "Download failed: $R0"
			Quit
no_need_to_download_vcredist_2005_sp1:
	ExecWait '"arch\openvibe-vcredist-2005-sp1.exe" /q'
;no_need_to_install_vcredist_2005_sp1:

	SetOutPath "$INSTDIR\dependencies"
	IfFileExists "arch\openvibe-vcredist-2008-sp1.exe" no_need_to_download_vcredist_2008_sp1
	NSISdl::download "http://download.microsoft.com/download/9/e/d/9edd8390-011b-4c6d-9806-d8dc2b10c0fb/vcredist_x86.exe" "arch\openvibe-vcredist-2008-sp1.exe"
	Pop $R0 ; Get the return value
		StrCmp $R0 "success" +3
			MessageBox MB_OK "Download failed: $R0"
			Quit
no_need_to_download_vcredist_2008_sp1:
	ExecWait '"arch\openvibe-vcredist-2008-sp1.exe" /q'
;no_need_to_install_vcredist_2008_sp1:

	SetOutPath "$INSTDIR\dependencies\arch"
	File ..\dependencies\arch\openvibe-dependency-boost-1.34.0.zip
	File ..\dependencies\arch\openvibe-dependency-cmake-2.6.2.zip
	File ..\dependencies\arch\openvibe-dependency-expat-2.0.1.zip
	File ..\dependencies\arch\openvibe-dependency-gtk-2.10.11.zip
	File ..\dependencies\arch\openvibe-dependency-itpp-4.0.6.zip
	File ..\dependencies\arch\openvibe-dependency-obt-22.zip
	File ..\dependencies\arch\openvibe-dependency-ogre-1.6.2-vc2008.zip
	File ..\dependencies\arch\openvibe-dependency-openmask4~dotsceneloader-164.zip
	File ..\dependencies\arch\openvibe-dependency-vrpn-7.13.zip

	SetOutPath "$INSTDIR\dependencies"
	ZipDLL::extractall "arch\openvibe-dependency-boost-1.34.0" "boost"
	ZipDLL::extractall "arch\openvibe-dependency-cmake-2.6.2.zip" "cmake"
	ZipDLL::extractall "arch\openvibe-dependency-expat-2.0.1.zip" "expat"
	ZipDLL::extractall "arch\openvibe-dependency-gtk-2.10.11.zip" "gtk"
	ZipDLL::extractall "arch\openvibe-dependency-itpp-4.0.6.zip" "itpp"
	ZipDLL::extractall "arch\openvibe-dependency-obt-22.zip" "obt"
	ZipDLL::extractall "arch\openvibe-dependency-ogre-1.6.2-vc2008.zip" "ogre-vc2008"
	ZipDLL::extractall "arch\openvibe-dependency-openmask4~dotsceneloader-164.zip" "openmask"
	ZipDLL::extractall "arch\openvibe-dependency-vrpn-7.13.zip" "vrpn"

	FileOpen $0 "$INSTDIR\dependencies\set-env.cmd" w
	FileWrite $0 "@echo off$\r$\n"
	FileWrite $0 "$\r$\n"
	FileWrite $0 "SET OV_DEP_ITPP=$INSTDIR\dependencies\itpp$\r$\n"
	FileWrite $0 "SET OV_DEP_CMAKE=$INSTDIR\dependencies\cmake\cmake-2.6.2-win32-x86$\r$\n"
	FileWrite $0 "SET OV_DEP_EXPAT=$INSTDIR\dependencies\expat$\r$\n"
	FileWrite $0 "SET OV_DEP_BOOST=$INSTDIR\dependencies\boost\boost_1_34_0$\r$\n"
	FileWrite $0 "SET OV_DEP_GLADE=$INSTDIR\dependencies\gtk$\r$\n"
	FileWrite $0 "SET OV_DEP_ITPP=$INSTDIR\dependencies\itpp$\r$\n"
	FileWrite $0 "SET OV_DEP_OBT=$INSTDIR\dependencies\obt$\r$\n"
	FileWrite $0 "SET OV_DEP_OGRE=$INSTDIR\dependencies\ogre-vc2008$\r$\n"
	FileWrite $0 "SET OV_DEP_OPENMASK=$INSTDIR\dependencies\openmask$\r$\n"
	FileWrite $0 "SET OV_DEP_DSI=$INSTDIR\dependencies\openmask$\r$\n"
	FileWrite $0 "SET OV_DEP_VRPN=$INSTDIR\dependencies\vrpn$\r$\n"
	FileWrite $0 "$\r$\n"
	FileWrite $0 "SET OGRE_HOME=$INSTDIR\dependencies\ogre-vc2008$\r$\n"
	FileWrite $0 "SET OMK_HOME=$INSTDIR\dependencies\openmask$\r$\n"
	FileWrite $0 "SET OMK_BIN=$INSTDIR\dependencies\openmask$\r$\n"
	FileWrite $0 "SET VRPNROOT=$INSTDIR\dependencies\vrpn$\r$\n"
	FileWrite $0 "$\r$\n"
	FileWrite $0 "SET PATH=%OV_DEP_ITPP%\bin;%PATH%$\r$\n"
	FileWrite $0 "SET PATH=%OV_DEP_CMAKE%\bin;%PATH%$\r$\n"
	FileWrite $0 "SET PATH=%OV_DEP_EXPAT%\bin;%PATH%$\r$\n"
	FileWrite $0 "SET PATH=%OV_DEP_BOOST%\bin;%PATH%$\r$\n"
	FileWrite $0 "SET PATH=%OV_DEP_GLADE%\bin;%PATH%$\r$\n"
	FileWrite $0 "SET PATH=%OV_DEP_ITPP%\bin;%PATH%$\r$\n"
	FileWrite $0 "SET PATH=%OV_DEP_OBT%\lib;%PATH%$\r$\n"
	FileWrite $0 "SET PATH=%OV_DEP_OGRE%\bin\release;%OV_DEP_OGRE%\bin\debug;%PATH%$\r$\n"
	FileWrite $0 "SET PATH=%OV_DEP_OPENMASK%\lib;%PATH%$\r$\n"
	FileWrite $0 "SET PATH=%OV_DEP_DSI%\lib;%PATH%$\r$\n"
	FileWrite $0 "SET PATH=%OV_DEP_VRPN%\bin;%PATH%$\r$\n"
	FileClose $0

	SetOutPath "$INSTDIR"
	File /nonfatal /r ..\dist\bin
	; File /nonfatal /r ..\dist\doc
	; File /nonfatal /r ..\dist\etc
	; File /nonfatal /r ..\dist\include
	; File /nonfatal /r ..\dist\lib
	File /nonfatal /r ..\dist\log
	File /nonfatal /r ..\dist\share
	; File /nonfatal /r ..\dist\tmp

	FileOpen $0 "$INSTDIR\openvibe-designer.cmd" w
	FileWrite $0 "@echo off$\r$\n"
	FileWrite $0 "call dependencies\set-env.cmd$\r$\n"
	FileWrite $0 "$\r$\n"
	FileWrite $0 "cd bin$\r$\n"
	FileWrite $0 "OpenViBE-designer-dynamic.exe$\r$\n"
	FileWrite $0 "$\r$\n"
	FileWrite $0 "pause$\r$\n"
	FileClose $0

	FileOpen $0 "$INSTDIR\openvibe-acquisition-server.cmd" w
	FileWrite $0 "@echo off$\r$\n"
	FileWrite $0 "call dependencies\set-env.cmd$\r$\n"
	FileWrite $0 "$\r$\n"
	FileWrite $0 "cd bin$\r$\n"
	FileWrite $0 "OpenViBE-acquisition-server-dynamic.exe$\r$\n"
	FileWrite $0 "$\r$\n"
	FileWrite $0 "pause$\r$\n"
	FileClose $0

	FileOpen $0 "$INSTDIR\openvibe-id-generator.cmd" w
	FileWrite $0 "@echo off$\r$\n"
	FileWrite $0 "call dependencies\set-env.cmd$\r$\n"
	FileWrite $0 "$\r$\n"
	FileWrite $0 "cd bin$\r$\n"
	FileWrite $0 "OpenViBE-id-generator-dynamic.exe$\r$\n"
	FileWrite $0 "$\r$\n"
	FileWrite $0 "pause$\r$\n"
	FileClose $0

	FileOpen $0 "$INSTDIR\openvibe-plugin-inspector.cmd" w
	FileWrite $0 "@echo off$\r$\n"
	FileWrite $0 "call dependencies\set-env.cmd$\r$\n"
	FileWrite $0 "$\r$\n"
	FileWrite $0 "cd bin$\r$\n"
	FileWrite $0 "OpenViBE-plugin-inspector-dynamic.exe$\r$\n"
	FileWrite $0 "$\r$\n"
	FileWrite $0 "pause$\r$\n"
	FileClose $0

	CreateDirectory "$SMPROGRAMS\OpenViBE"
	CreateShortCut "$SMPROGRAMS\OpenViBE\openvibe designer.lnk"           "$INSTDIR\openvibe-designer.cmd"           "" "%SystemRoot%\system32\shell32.dll" 137
	CreateShortCut "$SMPROGRAMS\OpenViBE\openvibe acquisition server.lnk" "$INSTDIR\openvibe-acquisition-server.cmd" "" "%SystemRoot%\system32\shell32.dll" 18
	CreateShortCut "$SMPROGRAMS\OpenViBE\openvibe id generator.lnk"       "$INSTDIR\openvibe-id-generator.cmd"       "" "%SystemRoot%\system32\shell32.dll" 57
	CreateShortCut "$SMPROGRAMS\OpenViBE\openvibe plugin inspector.lnk"   "$INSTDIR\openvibe-plugin-inspector.cmd"   "" "%SystemRoot%\system32\shell32.dll" 55
	CreateShortCut "$SMPROGRAMS\OpenViBE\uninstall.lnk"                   "$INSTDIR\Uninstall.exe"

SectionEnd

Section "Uninstall"

	RMDir /r $INSTDIR
	RMDir /r "$SMPROGRAMS\OpenViBE"

SectionEnd