#ifndef __OpenViBE_All_H__
#define __OpenViBE_All_H__

//___________________________________________________________________//
//                                                                   //
// Basic includes                                                    //
//___________________________________________________________________//
//                                                                   //

#include "ov_types.h"
#include "ov_defines.h"

#include "ovCIdentifier.h"
#include "ovCString.h"

#include "ovIObject.h"

//___________________________________________________________________//
//                                                                   //
// Kernel includes                                                   //
//___________________________________________________________________//
//                                                                   //

#include "kernel/ovIKernel.h"
#include "kernel/ovIKernelLog.h"
#include "kernel/ovIKernelDesc.h"
#include "kernel/ovIKernelObject.h"
#include "kernel/ovIKernelLoader.h"
#include "kernel/ovIObjectFactory.h"
#include "kernel/ovIPluginModule.h"
#include "kernel/ovIPluginManager.h"
#include "kernel/ovIBox.h"
#include "kernel/ovILink.h"
#include "kernel/ovIScenario.h"
#include "kernel/ovIScenarioManager.h"

//___________________________________________________________________//
//                                                                   //
// Player includes                                                   //
//___________________________________________________________________//
//                                                                   //

#include "kernel/player/ovIPlayer.h"

//___________________________________________________________________//
//                                                                   //
// Plugins includes                                                  //
//___________________________________________________________________//
//                                                                   //

#include "plugins/ovIBoxContext.h"
#include "plugins/ovIBoxAlgorithmContext.h"
#include "plugins/ovIBoxBehaviorContext.h"
#include "plugins/ovIBoxProto.h"
#include "plugins/ovIKernelContext.h"
#include "plugins/ovIPluginObjectLoadContext.h"
#include "plugins/ovIPluginObjectSaveContext.h"

#include "plugins/ovIPluginObject.h"
#include "plugins/ovIPluginObjectDesc.h"

#include "plugins/ovIBoxAlgorithmDesc.h"
#include "plugins/ovIBoxAlgorithm.h"
#include "plugins/ovIBoxBehaviorDesc.h"
#include "plugins/ovIBoxBehavior.h"
#include "plugins/ovIScenarioImporterDesc.h"
#include "plugins/ovIScenarioImporter.h"
#include "plugins/ovIScenarioExporterDesc.h"
#include "plugins/ovIScenarioExporter.h"

#endif // __OpenViBE_All_H__
