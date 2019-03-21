#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBucketStruct()
{
    class_< FBucketStruct >("FBucketStruct", no_init)
        .def_readwrite("NdxToStartCheckFrom", &FBucketStruct::NdxToStartCheckFrom)
        .def_readwrite("DistanceSquared", &FBucketStruct::DistanceSquared)
        .def_readwrite("MaxLineChecksPerFrame", &FBucketStruct::MaxLineChecksPerFrame)
        .def_readwrite("MaxIterationsPerFrame", &FBucketStruct::MaxIterationsPerFrame)
        .def_readwrite("Exposures", &FBucketStruct::Exposures)
  ;
}