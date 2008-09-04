#ifndef __OpenViBEPlugins_BoxAlgorithm_StimulationListener_H__
#define __OpenViBEPlugins_BoxAlgorithm_StimulationListener_H__

#include "../../ovp_defines.h"
#include <openvibe/ov_all.h>
#include <openvibe-toolkit/ovtk_all.h>
#include <vector>

#define OVP_ClassId_BoxAlgorithm_StimulationListener     OpenViBE::CIdentifier(0x65731E1D, 0x47DE5276)
#define OVP_ClassId_BoxAlgorithm_StimulationListenerDesc OpenViBE::CIdentifier(0x0EC013FD, 0x5DD23E44)

namespace OpenViBEPlugins
{
	namespace Tools
	{
		class CBoxAlgorithmStimulationListener : virtual public OpenViBEToolkit::TBoxAlgorithm < OpenViBE::Plugins::IBoxAlgorithm >
		{
		public:

			virtual void release(void) { delete this; }

			virtual OpenViBE::boolean initialize(void);
			virtual OpenViBE::boolean uninitialize(void);
			virtual OpenViBE::boolean processInput(OpenViBE::uint32 ui32InputIndex);
			virtual OpenViBE::boolean process(void);

			_IsDerivedFromClass_Final_(OpenViBEToolkit::TBoxAlgorithm < OpenViBE::Plugins::IBoxAlgorithm >, OVP_ClassId_BoxAlgorithm_StimulationListener);

		protected:

			OpenViBE::Kernel::ELogLevel m_eLogLevel;
			std::vector < OpenViBE::Kernel::IAlgorithmProxy* > m_vStreamDecoder;
		};

		class CBoxAlgorithmStimulationListenerDesc : virtual public OpenViBE::Plugins::IBoxAlgorithmDesc
		{
		public:

			virtual void release(void) { }

			virtual OpenViBE::CString getName(void) const                { return OpenViBE::CString("Stimulation listener"); }
			virtual OpenViBE::CString getAuthorName(void) const          { return OpenViBE::CString("Yann Renard"); }
			virtual OpenViBE::CString getAuthorCompanyName(void) const   { return OpenViBE::CString("INRIA/IRISA"); }
			virtual OpenViBE::CString getShortDescription(void) const    { return OpenViBE::CString("Prints stimulation codes in the log manager"); }
			virtual OpenViBE::CString getDetailedDescription(void) const { return OpenViBE::CString("blah"); }
			virtual OpenViBE::CString getCategory(void) const            { return OpenViBE::CString("Tools"); }
			virtual OpenViBE::CString getVersion(void) const             { return OpenViBE::CString("1.0"); }
			virtual OpenViBE::CString getStockItemName(void) const       { return OpenViBE::CString("gtk-info"); }

			virtual OpenViBE::CIdentifier getCreatedClass(void) const    { return OVP_ClassId_BoxAlgorithm_StimulationListener; }
			virtual OpenViBE::Plugins::IPluginObject* create(void)       { return new OpenViBEPlugins::Tools::CBoxAlgorithmStimulationListener; }

			virtual OpenViBE::boolean getBoxPrototype(
				OpenViBE::Kernel::IBoxProto& rBoxAlgorithmPrototype) const
			{
				rBoxAlgorithmPrototype.addInput  ("Stimulation stream 1", OV_TypeId_Stimulations);
				rBoxAlgorithmPrototype.addInput  ("Stimulation stream 2", OV_TypeId_Stimulations);
				rBoxAlgorithmPrototype.addSetting("Log level to use", OV_TypeId_LogLevel, "Debug");

				return true;
			}

			_IsDerivedFromClass_Final_(OpenViBE::Plugins::IBoxAlgorithmDesc, OVP_ClassId_BoxAlgorithm_StimulationListenerDesc);
		};
	};
};

#endif // __OpenViBEPlugins_BoxAlgorithm_StimulationListener_H__