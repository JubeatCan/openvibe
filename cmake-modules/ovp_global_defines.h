#ifndef __OpenViBEPlugins_Global_Defines_H__
#define __OpenViBEPlugins_Global_Defines_H__

// ----------------------------------------------------
// Streamed matrix stream encoder
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_StreamedMatrixStreamEncoder                                                                    OpenViBE::CIdentifier(0x5cb32c71, 0x576f00a6)
#define OVP_GD_ClassId_Algorithm_StreamedMatrixStreamEncoderDesc                                                                OpenViBE::CIdentifier(0xeeefe060, 0x646ee8ab)
#define OVP_GD_Algorithm_StreamedMatrixStreamEncoder_InputParameterId_Matrix                                                    OpenViBE::CIdentifier(0xa3e9e5b0, 0xae756303)
#define OVP_GD_Algorithm_StreamedMatrixStreamEncoder_OutputParameterId_EncodedMemoryBuffer                                      OpenViBE::CIdentifier(0xa3d8b171, 0xf8734734)
#define OVP_GD_Algorithm_StreamedMatrixStreamEncoder_InputTriggerId_EncodeBuffer                                                OpenViBE::CIdentifier(0x1b7076fd, 0x449bc70a)
#define OVP_GD_Algorithm_StreamedMatrixStreamEncoder_InputTriggerId_EncodeEnd                                                   OpenViBE::CIdentifier(0x3fc23508, 0x806753d8)
#define OVP_GD_Algorithm_StreamedMatrixStreamEncoder_InputTriggerId_EncodeHeader                                                OpenViBE::CIdentifier(0x878eaf60, 0xf9d5303f)

// ----------------------------------------------------
// Stimulation stream encoder
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_StimulationStreamEncoder                                                                       OpenViBE::CIdentifier(0x6e86f7d5, 0xa4668108)
#define OVP_GD_ClassId_Algorithm_StimulationStreamEncoderDesc                                                                   OpenViBE::CIdentifier(0x9b994b50, 0x52c3f06a)
#define OVP_GD_Algorithm_StimulationStreamEncoder_InputParameterId_SimtulationSet                                               OpenViBE::CIdentifier(0x8565254c, 0x3a49268e)
#define OVP_GD_Algorithm_StimulationStreamEncoder_OutputParameterId_EncodedMemoryBuffer                                         OpenViBE::CIdentifier(0xa3d8b171, 0xf8734734)
#define OVP_GD_Algorithm_StimulationStreamEncoder_InputTriggerId_EncodeBuffer                                                   OpenViBE::CIdentifier(0x1b7076fd, 0x449bc70a)
#define OVP_GD_Algorithm_StimulationStreamEncoder_InputTriggerId_EncodeEnd                                                      OpenViBE::CIdentifier(0x3fc23508, 0x806753d8)
#define OVP_GD_Algorithm_StimulationStreamEncoder_InputTriggerId_EncodeHeader                                                   OpenViBE::CIdentifier(0x878eaf60, 0xf9d5303f)

// ----------------------------------------------------
// Spectrum stream encoder
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_SpectrumStreamEncoder                                                                          OpenViBE::CIdentifier(0xb3e252db, 0xc3214498)
#define OVP_GD_ClassId_Algorithm_SpectrumStreamEncoderDesc                                                                      OpenViBE::CIdentifier(0xd6182973, 0x122ce114)
#define OVP_GD_Algorithm_SpectrumStreamEncoder_InputParameterId_Matrix                                                          OpenViBE::CIdentifier(0xa3e9e5b0, 0xae756303)
#define OVP_GD_Algorithm_SpectrumStreamEncoder_InputParameterId_MinMaxFrenquencyBands                                           OpenViBE::CIdentifier(0xf5251300, 0x72520e28)
#define OVP_GD_Algorithm_SpectrumStreamEncoder_OutputParameterId_EncodedMemoryBuffer                                            OpenViBE::CIdentifier(0xa3d8b171, 0xf8734734)
#define OVP_GD_Algorithm_SpectrumStreamEncoder_InputTriggerId_EncodeBuffer                                                      OpenViBE::CIdentifier(0x1b7076fd, 0x449bc70a)
#define OVP_GD_Algorithm_SpectrumStreamEncoder_InputTriggerId_EncodeEnd                                                         OpenViBE::CIdentifier(0x3fc23508, 0x806753d8)
#define OVP_GD_Algorithm_SpectrumStreamEncoder_InputTriggerId_EncodeHeader                                                      OpenViBE::CIdentifier(0x878eaf60, 0xf9d5303f)

// ----------------------------------------------------
// Signal stream encoder
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_SignalStreamEncoder                                                                            OpenViBE::CIdentifier(0xc488ad3c, 0xeb2e36bf)
#define OVP_GD_ClassId_Algorithm_SignalStreamEncoderDesc                                                                        OpenViBE::CIdentifier(0x90ac1e0f, 0x01518200)
#define OVP_GD_Algorithm_SignalStreamEncoder_InputParameterId_SamplingRate                                                      OpenViBE::CIdentifier(0x998710ff, 0x2c5cca82)
#define OVP_GD_Algorithm_SignalStreamEncoder_InputParameterId_Matrix                                                            OpenViBE::CIdentifier(0xa3e9e5b0, 0xae756303)
#define OVP_GD_Algorithm_SignalStreamEncoder_OutputParameterId_EncodedMemoryBuffer                                              OpenViBE::CIdentifier(0xa3d8b171, 0xf8734734)
#define OVP_GD_Algorithm_SignalStreamEncoder_InputTriggerId_EncodeBuffer                                                        OpenViBE::CIdentifier(0x1b7076fd, 0x449bc70a)
#define OVP_GD_Algorithm_SignalStreamEncoder_InputTriggerId_EncodeEnd                                                           OpenViBE::CIdentifier(0x3fc23508, 0x806753d8)
#define OVP_GD_Algorithm_SignalStreamEncoder_InputTriggerId_EncodeHeader                                                        OpenViBE::CIdentifier(0x878eaf60, 0xf9d5303f)

// ----------------------------------------------------
// Feature vector stream encoder
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_FeatureVectorStreamEncoder                                                                     OpenViBE::CIdentifier(0x7ebe049d, 0xf777a602)
#define OVP_GD_ClassId_Algorithm_FeatureVectorStreamEncoderDesc                                                                 OpenViBE::CIdentifier(0xc249527b, 0x89ee1996)
#define OVP_GD_Algorithm_FeatureVectorStreamEncoder_InputParameterId_Matrix                                                     OpenViBE::CIdentifier(0xa3e9e5b0, 0xae756303)
#define OVP_GD_Algorithm_FeatureVectorStreamEncoder_OutputParameterId_EncodedMemoryBuffer                                       OpenViBE::CIdentifier(0xa3d8b171, 0xf8734734)
#define OVP_GD_Algorithm_FeatureVectorStreamEncoder_InputTriggerId_EncodeBuffer                                                 OpenViBE::CIdentifier(0x1b7076fd, 0x449bc70a)
#define OVP_GD_Algorithm_FeatureVectorStreamEncoder_InputTriggerId_EncodeEnd                                                    OpenViBE::CIdentifier(0x3fc23508, 0x806753d8)
#define OVP_GD_Algorithm_FeatureVectorStreamEncoder_InputTriggerId_EncodeHeader                                                 OpenViBE::CIdentifier(0x878eaf60, 0xf9d5303f)

// ----------------------------------------------------
// Experiment information stream encoder
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_ExperimentInformationStreamEncoder                                                             OpenViBE::CIdentifier(0x56b354fe, 0xbf175468)
#define OVP_GD_ClassId_Algorithm_ExperimentInformationStreamEncoderDesc                                                         OpenViBE::CIdentifier(0x8cc2c754, 0x61665fda)
#define OVP_GD_Algorithm_ExperimentInformationStreamEncoder_InputParameterId_SubjectName                                        OpenViBE::CIdentifier(0x3d3826ea, 0xe8883815)
#define OVP_GD_Algorithm_ExperimentInformationStreamEncoder_InputParameterId_ExperimentIdentifier                               OpenViBE::CIdentifier(0x40259641, 0x478c73de)
#define OVP_GD_Algorithm_ExperimentInformationStreamEncoder_InputParameterId_LaboratoryName                                     OpenViBE::CIdentifier(0x5ca80fa5, 0x774f01cb)
#define OVP_GD_Algorithm_ExperimentInformationStreamEncoder_InputParameterId_SubjectGender                                      OpenViBE::CIdentifier(0x7d5059e8, 0xe4d8b38d)
#define OVP_GD_Algorithm_ExperimentInformationStreamEncoder_InputParameterId_SubjectIdentifier                                  OpenViBE::CIdentifier(0x97c5d20d, 0x203e65b3)
#define OVP_GD_Algorithm_ExperimentInformationStreamEncoder_InputParameterId_TechnicianName                                     OpenViBE::CIdentifier(0xb8a94b68, 0x389393d9)
#define OVP_GD_Algorithm_ExperimentInformationStreamEncoder_InputParameterId_ExperimentDate                                     OpenViBE::CIdentifier(0xbc0266a2, 0x9c2935f1)
#define OVP_GD_Algorithm_ExperimentInformationStreamEncoder_InputParameterId_SubjectAge                                         OpenViBE::CIdentifier(0xc36c6b08, 0x5227380a)
#define OVP_GD_Algorithm_ExperimentInformationStreamEncoder_InputParameterId_TechnicianIdentifier                               OpenViBE::CIdentifier(0xc8ecfbbc, 0x0dcda310)
#define OVP_GD_Algorithm_ExperimentInformationStreamEncoder_InputParameterId_LaboratoryIdentifier                               OpenViBE::CIdentifier(0xe761d3d4, 0x44ba1ebf)
#define OVP_GD_Algorithm_ExperimentInformationStreamEncoder_OutputParameterId_EncodedMemoryBuffer                               OpenViBE::CIdentifier(0xa3d8b171, 0xf8734734)
#define OVP_GD_Algorithm_ExperimentInformationStreamEncoder_InputTriggerId_EncodeBuffer                                         OpenViBE::CIdentifier(0x1b7076fd, 0x449bc70a)
#define OVP_GD_Algorithm_ExperimentInformationStreamEncoder_InputTriggerId_EncodeEnd                                            OpenViBE::CIdentifier(0x3fc23508, 0x806753d8)
#define OVP_GD_Algorithm_ExperimentInformationStreamEncoder_InputTriggerId_EncodeHeader                                         OpenViBE::CIdentifier(0x878eaf60, 0xf9d5303f)

// ----------------------------------------------------
// Streamed matrix stream decoder
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_StreamedMatrixStreamDecoder                                                                    OpenViBE::CIdentifier(0x7359d0db, 0x91784b21)
#define OVP_GD_ClassId_Algorithm_StreamedMatrixStreamDecoderDesc                                                                OpenViBE::CIdentifier(0x384529d5, 0xd8e0a728)
#define OVP_GD_Algorithm_StreamedMatrixStreamDecoder_InputParameterId_MemoryBufferToDecode                                      OpenViBE::CIdentifier(0x2f98ea3c, 0xfb0be096)
#define OVP_GD_Algorithm_StreamedMatrixStreamDecoder_OutputParameterId_Matrix                                                   OpenViBE::CIdentifier(0x79ef3123, 0x35e3ea4d)
#define OVP_GD_Algorithm_StreamedMatrixStreamDecoder_OutputTriggerId_ReceivedHeader                                             OpenViBE::CIdentifier(0x815234bf, 0xaabae5f2)
#define OVP_GD_Algorithm_StreamedMatrixStreamDecoder_OutputTriggerId_ReceivedBuffer                                             OpenViBE::CIdentifier(0xaa2738bf, 0xf7fe9fc3)
#define OVP_GD_Algorithm_StreamedMatrixStreamDecoder_OutputTriggerId_ReceivedEnd                                                OpenViBE::CIdentifier(0xc4aa114c, 0x628c2d77)

// ----------------------------------------------------
// Stimulation stream decoder
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_StimulationStreamDecoder                                                                       OpenViBE::CIdentifier(0xc8807f2b, 0x0813c5b1)
#define OVP_GD_ClassId_Algorithm_StimulationStreamDecoderDesc                                                                   OpenViBE::CIdentifier(0x391a615b, 0x71cd888a)
#define OVP_GD_Algorithm_StimulationStreamDecoder_InputParameterId_MemoryBufferToDecode                                         OpenViBE::CIdentifier(0x2f98ea3c, 0xfb0be096)
#define OVP_GD_Algorithm_StimulationStreamDecoder_OutputParameterId_StimulationSet                                              OpenViBE::CIdentifier(0xf46d0c19, 0x47306bea)
#define OVP_GD_Algorithm_StimulationStreamDecoder_OutputTriggerId_ReceivedHeader                                                OpenViBE::CIdentifier(0x815234bf, 0xaabae5f2)
#define OVP_GD_Algorithm_StimulationStreamDecoder_OutputTriggerId_ReceivedBuffer                                                OpenViBE::CIdentifier(0xaa2738bf, 0xf7fe9fc3)
#define OVP_GD_Algorithm_StimulationStreamDecoder_OutputTriggerId_ReceivedEnd                                                   OpenViBE::CIdentifier(0xc4aa114c, 0x628c2d77)

// ----------------------------------------------------
// Spectrum stream decoder
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_SpectrumStreamDecoder                                                                          OpenViBE::CIdentifier(0x128202db, 0x449fc7a6)
#define OVP_GD_ClassId_Algorithm_SpectrumStreamDecoderDesc                                                                      OpenViBE::CIdentifier(0x54d18ee8, 0x5dbd913a)
#define OVP_GD_Algorithm_SpectrumStreamDecoder_InputParameterId_MemoryBufferToDecode                                            OpenViBE::CIdentifier(0x2f98ea3c, 0xfb0be096)
#define OVP_GD_Algorithm_SpectrumStreamDecoder_OutputParameterId_MinMaxFrenquencyBands                                          OpenViBE::CIdentifier(0x375e55e9, 0x9b3666f6)
#define OVP_GD_Algorithm_SpectrumStreamDecoder_OutputParameterId_Matrix                                                         OpenViBE::CIdentifier(0x79ef3123, 0x35e3ea4d)
#define OVP_GD_Algorithm_SpectrumStreamDecoder_OutputTriggerId_ReceivedHeader                                                   OpenViBE::CIdentifier(0x815234bf, 0xaabae5f2)
#define OVP_GD_Algorithm_SpectrumStreamDecoder_OutputTriggerId_ReceivedBuffer                                                   OpenViBE::CIdentifier(0xaa2738bf, 0xf7fe9fc3)
#define OVP_GD_Algorithm_SpectrumStreamDecoder_OutputTriggerId_ReceivedEnd                                                      OpenViBE::CIdentifier(0xc4aa114c, 0x628c2d77)

// ----------------------------------------------------
// Signal stream decoder
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_SignalStreamDecoder                                                                            OpenViBE::CIdentifier(0x7237c149, 0x0ca66da7)
#define OVP_GD_ClassId_Algorithm_SignalStreamDecoderDesc                                                                        OpenViBE::CIdentifier(0xf1547d89, 0x49ffd0c2)
#define OVP_GD_Algorithm_SignalStreamDecoder_InputParameterId_MemoryBufferToDecode                                              OpenViBE::CIdentifier(0x2f98ea3c, 0xfb0be096)
#define OVP_GD_Algorithm_SignalStreamDecoder_OutputParameterId_SamplingRate                                                     OpenViBE::CIdentifier(0x363d8d79, 0xeefb912c)
#define OVP_GD_Algorithm_SignalStreamDecoder_OutputParameterId_Matrix                                                           OpenViBE::CIdentifier(0x79ef3123, 0x35e3ea4d)
#define OVP_GD_Algorithm_SignalStreamDecoder_OutputTriggerId_ReceivedHeader                                                     OpenViBE::CIdentifier(0x815234bf, 0xaabae5f2)
#define OVP_GD_Algorithm_SignalStreamDecoder_OutputTriggerId_ReceivedBuffer                                                     OpenViBE::CIdentifier(0xaa2738bf, 0xf7fe9fc3)
#define OVP_GD_Algorithm_SignalStreamDecoder_OutputTriggerId_ReceivedEnd                                                        OpenViBE::CIdentifier(0xc4aa114c, 0x628c2d77)

// ----------------------------------------------------
// Feature vector stream decoder
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_FeatureVectorStreamDecoder                                                                     OpenViBE::CIdentifier(0xc2689ecc, 0x43b335c1)
#define OVP_GD_ClassId_Algorithm_FeatureVectorStreamDecoderDesc                                                                 OpenViBE::CIdentifier(0xab0ae561, 0xf181e34f)
#define OVP_GD_Algorithm_FeatureVectorStreamDecoder_InputParameterId_MemoryBufferToDecode                                       OpenViBE::CIdentifier(0x2f98ea3c, 0xfb0be096)
#define OVP_GD_Algorithm_FeatureVectorStreamDecoder_OutputParameterId_Matrix                                                    OpenViBE::CIdentifier(0x79ef3123, 0x35e3ea4d)
#define OVP_GD_Algorithm_FeatureVectorStreamDecoder_OutputTriggerId_ReceivedHeader                                              OpenViBE::CIdentifier(0x815234bf, 0xaabae5f2)
#define OVP_GD_Algorithm_FeatureVectorStreamDecoder_OutputTriggerId_ReceivedBuffer                                              OpenViBE::CIdentifier(0xaa2738bf, 0xf7fe9fc3)
#define OVP_GD_Algorithm_FeatureVectorStreamDecoder_OutputTriggerId_ReceivedEnd                                                 OpenViBE::CIdentifier(0xc4aa114c, 0x628c2d77)

// ----------------------------------------------------
// Experiment information stream decoder
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_ExperimentInformationStreamDecoder                                                             OpenViBE::CIdentifier(0x6fa7d52b, 0x80e2abd6)
#define OVP_GD_ClassId_Algorithm_ExperimentInformationStreamDecoderDesc                                                         OpenViBE::CIdentifier(0x0f37ca61, 0x8a77f44e)
#define OVP_GD_Algorithm_ExperimentInformationStreamDecoder_InputParameterId_MemoryBufferToDecode                               OpenViBE::CIdentifier(0x2f98ea3c, 0xfb0be096)
#define OVP_GD_Algorithm_ExperimentInformationStreamDecoder_OutputParameterId_SubjectName                                       OpenViBE::CIdentifier(0x3d3826ea, 0xe8883815)
#define OVP_GD_Algorithm_ExperimentInformationStreamDecoder_OutputParameterId_ExperimentIdentifier                              OpenViBE::CIdentifier(0x40259641, 0x478c73de)
#define OVP_GD_Algorithm_ExperimentInformationStreamDecoder_OutputParameterId_LaboratoryName                                    OpenViBE::CIdentifier(0x5ca80fa5, 0x774f01cb)
#define OVP_GD_Algorithm_ExperimentInformationStreamDecoder_OutputParameterId_SubjectGender                                     OpenViBE::CIdentifier(0x7d5059e8, 0xe4d8b38d)
#define OVP_GD_Algorithm_ExperimentInformationStreamDecoder_OutputParameterId_SubjectIdentifier                                 OpenViBE::CIdentifier(0x97c5d20d, 0x203e65b3)
#define OVP_GD_Algorithm_ExperimentInformationStreamDecoder_OutputParameterId_TechnicianName                                    OpenViBE::CIdentifier(0xb8a94b68, 0x389393d9)
#define OVP_GD_Algorithm_ExperimentInformationStreamDecoder_OutputParameterId_ExperimentDate                                    OpenViBE::CIdentifier(0xbc0266a2, 0x9c2935f1)
#define OVP_GD_Algorithm_ExperimentInformationStreamDecoder_OutputParameterId_SubjectAge                                        OpenViBE::CIdentifier(0xc36c6b08, 0x5227380a)
#define OVP_GD_Algorithm_ExperimentInformationStreamDecoder_OutputParameterId_TechnicianIdentifier                              OpenViBE::CIdentifier(0xc8ecfbbc, 0x0dcda310)
#define OVP_GD_Algorithm_ExperimentInformationStreamDecoder_OutputParameterId_LaboratoryIdentifier                              OpenViBE::CIdentifier(0xe761d3d4, 0x44ba1ebf)
#define OVP_GD_Algorithm_ExperimentInformationStreamDecoder_OutputTriggerId_ReceivedHeader                                      OpenViBE::CIdentifier(0x815234bf, 0xaabae5f2)
#define OVP_GD_Algorithm_ExperimentInformationStreamDecoder_OutputTriggerId_ReceivedBuffer                                      OpenViBE::CIdentifier(0xaa2738bf, 0xf7fe9fc3)
#define OVP_GD_Algorithm_ExperimentInformationStreamDecoder_OutputTriggerId_ReceivedEnd                                         OpenViBE::CIdentifier(0xc4aa114c, 0x628c2d77)

// ----------------------------------------------------
// Acquisition stream decoder
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_AcquisitionStreamDecoder                                                                       OpenViBE::CIdentifier(0x1e0812b7, 0x3f686dd4)
#define OVP_GD_ClassId_Algorithm_AcquisitionStreamDecoderDesc                                                                   OpenViBE::CIdentifier(0xa01599b0, 0x7f51631a)
#define OVP_GD_Algorithm_AcquisitionStreamDecoder_InputParameterId_MemoryBufferToDecode                                         OpenViBE::CIdentifier(0x2f98ea3c, 0xfb0be096)
#define OVP_GD_Algorithm_AcquisitionStreamDecoder_OutputParameterId_SubjectAge                                                  OpenViBE::CIdentifier(0x02305f0e, 0xbe576533)
#define OVP_GD_Algorithm_AcquisitionStreamDecoder_OutputParameterId_Signal                                                      OpenViBE::CIdentifier(0x4fcc8d5e, 0x5a47117d)
#define OVP_GD_Algorithm_AcquisitionStreamDecoder_OutputParameterId_SubjectGender                                               OpenViBE::CIdentifier(0x980fe40f, 0xb9e4a021)
#define OVP_GD_Algorithm_AcquisitionStreamDecoder_OutputParameterId_ExperimentIdentifier                                        OpenViBE::CIdentifier(0xc1b135a6, 0x3feb7790)
#define OVP_GD_Algorithm_AcquisitionStreamDecoder_OutputParameterId_StimulationSet                                              OpenViBE::CIdentifier(0xc3049a33, 0x890dc535)
#define OVP_GD_Algorithm_AcquisitionStreamDecoder_OutputParameterId_ChannelLocation                                             OpenViBE::CIdentifier(0xedd46293, 0x67747212)
#define OVP_GD_Algorithm_AcquisitionStreamDecoder_OutputParameterId_SamplingRate                                                OpenViBE::CIdentifier(0xf9414765, 0x2a689150)
#define OVP_GD_Algorithm_AcquisitionStreamDecoder_OutputTriggerId_ReceivedHeader                                                OpenViBE::CIdentifier(0x815234bf, 0xaabae5f2)
#define OVP_GD_Algorithm_AcquisitionStreamDecoder_OutputTriggerId_ReceivedBuffer                                                OpenViBE::CIdentifier(0xaa2738bf, 0xf7fe9fc3)
#define OVP_GD_Algorithm_AcquisitionStreamDecoder_OutputTriggerId_ReceivedEnd                                                   OpenViBE::CIdentifier(0xc4aa114c, 0x628c2d77)

// ----------------------------------------------------
// Matrix average
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_MatrixAverage                                                                                  OpenViBE::CIdentifier(0x5e5a6c1c, 0x6f6beb03)
#define OVP_GD_ClassId_Algorithm_MatrixAverageDesc                                                                              OpenViBE::CIdentifier(0x1992881f, 0xc938c0f2)
#define OVP_GD_Algorithm_MatrixAverage_InputParameterId_InputMatrix                                                             OpenViBE::CIdentifier(0x913e9c3b, 0x8a62f5e3)
#define OVP_GD_Algorithm_MatrixAverage_InputParameterId_MatrixCountForAveraging                                                 OpenViBE::CIdentifier(0xdbb778a3, 0x9c275158)
#define OVP_GD_Algorithm_MatrixAverage_OutputParameterId_OutputAveragedMatrix                                                   OpenViBE::CIdentifier(0x03ce5ae5, 0xbd9031e0)
#define OVP_GD_Algorithm_MatrixAverage_InputTriggerId_PerformAverage                                                            OpenViBE::CIdentifier(0x50b6ee87, 0xdc42e660)
#define OVP_GD_Algorithm_MatrixAverage_InputTriggerId_Initialize                                                                OpenViBE::CIdentifier(0x670ec053, 0xadfe3f5c)

// ----------------------------------------------------
// Compute Filter Coefficients
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_ComputeFilterCoefficients                                                                      OpenViBE::CIdentifier(0x55bad77b, 0x5d8563a7)
#define OVP_GD_ClassId_Algorithm_ComputeFilterCoefficientsDesc                                                                  OpenViBE::CIdentifier(0xd871bd98, 0x705ed068)
#define OVP_GD_Algorithm_ComputeFilterCoefficients_InputParameterId_FilterKind                                                  OpenViBE::CIdentifier(0x1b7bcb2c, 0xe235a6e7)
#define OVP_GD_Algorithm_ComputeFilterCoefficients_InputParameterId_SamplingFrequency                                           OpenViBE::CIdentifier(0x25a9a0ff, 0x168f1b50)
#define OVP_GD_Algorithm_ComputeFilterCoefficients_InputParameterId_LowCutFrequency                                             OpenViBE::CIdentifier(0x3175b774, 0xa15aeeb2)
#define OVP_GD_Algorithm_ComputeFilterCoefficients_InputParameterId_FilterOrder                                                 OpenViBE::CIdentifier(0x8da1e555, 0x17e17828)
#define OVP_GD_Algorithm_ComputeFilterCoefficients_InputParameterId_BandPassRipple                                              OpenViBE::CIdentifier(0xb1500ed4, 0x0e558759)
#define OVP_GD_Algorithm_ComputeFilterCoefficients_InputParameterId_FilterName                                                  OpenViBE::CIdentifier(0xcfb7cdc9, 0x3eff788e)
#define OVP_GD_Algorithm_ComputeFilterCoefficients_InputParameterId_HighCutFrequency                                            OpenViBE::CIdentifier(0xe36387b7, 0xfb766612)
#define OVP_GD_Algorithm_ComputeFilterCoefficients_OutputParameterId_OutputCoefficientsMatrix                                   OpenViBE::CIdentifier(0xe5b2a753, 0x150500b4)
#define OVP_GD_Algorithm_ComputeFilterCoefficients_InputTriggerId_ComputeCoefficients                                           OpenViBE::CIdentifier(0x053a2c6e, 0x3a878825)
#define OVP_GD_Algorithm_ComputeFilterCoefficients_InputTriggerId_Initialize                                                    OpenViBE::CIdentifier(0x3d2cba61, 0x3fcf0dac)

// ----------------------------------------------------
// Apply Temporal Filter
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_ApplyTemporalFilter                                                                            OpenViBE::CIdentifier(0x916b558f, 0xe501a2f4)
#define OVP_GD_ClassId_Algorithm_ApplyTemporalFilterDesc                                                                        OpenViBE::CIdentifier(0xccbd104b, 0xac1c7d3e)
#define OVP_GD_Algorithm_ApplyTemporalFilter_InputParameterId_FilterCoefsInputMatrix                                            OpenViBE::CIdentifier(0xd316c4e7, 0xe4e89fd3)
#define OVP_GD_Algorithm_ApplyTemporalFilter_InputParameterId_SignalInputMatrix                                                 OpenViBE::CIdentifier(0xd5339105, 0x1d1293f0)
#define OVP_GD_Algorithm_ApplyTemporalFilter_OutputParameterId_SignalOutputMatrix                                               OpenViBE::CIdentifier(0x463276d1, 0xeaee8aad)
#define OVP_GD_Algorithm_ApplyTemporalFilter_InputTriggerId_Initialize                                                          OpenViBE::CIdentifier(0x3dae69c7, 0x7cfcbe2c)
#define OVP_GD_Algorithm_ApplyTemporalFilter_InputTriggerId_ApplyFilterWithHistoric                                             OpenViBE::CIdentifier(0xb7b7d546, 0x6000ff51)
#define OVP_GD_Algorithm_ApplyTemporalFilter_InputTriggerId_ApplyFilter                                                         OpenViBE::CIdentifier(0xbc1f5655, 0x9807b400)

// ----------------------------------------------------
// Addition
// ----------------------------------------------------

#define OVP_GD_ClassId_Algorithm_Addition                                                                                       OpenViBE::CIdentifier(0x75fce50e, 0x8302fa91)
#define OVP_GD_ClassId_Algorithm_AdditionDesc                                                                                   OpenViBE::CIdentifier(0x842e0b85, 0xa59fabc1)
#define OVP_GD_Algorithm_Addition_InputParameterId_FirstAdditionOperand                                                         OpenViBE::CIdentifier(0x00000000, 0x00000001)
#define OVP_GD_Algorithm_Addition_InputParameterId_SecondAdditionOperand                                                        OpenViBE::CIdentifier(0x00000000, 0x00000002)
#define OVP_GD_Algorithm_Addition_OutputParameterId_AdditionResult                                                              OpenViBE::CIdentifier(0x00000000, 0x00000003)

#endif // __OpenViBEPlugins_Global_Defines_H__
