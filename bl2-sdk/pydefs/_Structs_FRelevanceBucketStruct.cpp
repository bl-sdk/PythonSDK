#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRelevanceBucketStruct(py::object m)
{
    py::class_< FRelevanceBucketStruct >(m, "FRelevanceBucketStruct")
        .def_readwrite("NdxToStartCheckFrom", &FRelevanceBucketStruct::NdxToStartCheckFrom)
        .def_readwrite("DistanceSquared", &FRelevanceBucketStruct::DistanceSquared)
        .def_readwrite("MinLineChecksPerFrame", &FRelevanceBucketStruct::MinLineChecksPerFrame)
        .def_readwrite("MaxLineChecksPerFrame", &FRelevanceBucketStruct::MaxLineChecksPerFrame)
        .def_readwrite("MaxIterationsPerFrame", &FRelevanceBucketStruct::MaxIterationsPerFrame)
        .def_readwrite("Relevance", &FRelevanceBucketStruct::Relevance)
  ;
}