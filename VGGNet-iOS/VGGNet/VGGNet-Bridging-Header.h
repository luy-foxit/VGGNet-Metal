//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

@import MetalPerformanceShaders;

@interface MPSCNNConvolution (MPSCNNConvolution_iOS10)

-(nonnull instancetype) initWithDevice: (nonnull id <MTLDevice>) device
                 convolutionDescriptor: (const MPSCNNConvolutionDescriptor * __nonnull) convolutionDescriptor
                         kernelWeights: (const float * __nonnull) kernelWeights
                             biasTerms: (const float * __nullable) biasTerms
                                 flags: (MPSCNNConvolutionFlags) flags;

@end
