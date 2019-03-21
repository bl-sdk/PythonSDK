#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBucketStruct(py::object m)
{
    py::class_< FBucketStruct >(m, "FBucketStruct")
        .def_readwrite("NdxToStartCheckFrom", &FBucketStruct::NdxToStartCheckFrom)
        .def_readwrite("DistanceSquared", &FBucketStruct::DistanceSquared)
        .def_readwrite("MaxLineChecksPerFrame", &FBucketStruct::MaxLineChecksPerFrame)
        .def_readwrite("MaxIterationsPerFrame", &FBucketStruct::MaxIterationsPerFrame)
        .def_readwrite("Exposures", &FBucketStruct::Exposures)
  ;
}