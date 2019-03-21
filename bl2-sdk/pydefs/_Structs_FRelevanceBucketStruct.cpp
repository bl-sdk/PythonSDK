#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRelevanceBucketStruct()
{
    class_< FRelevanceBucketStruct >("FRelevanceBucketStruct", no_init)
        .def_readwrite("NdxToStartCheckFrom", &FRelevanceBucketStruct::NdxToStartCheckFrom)
        .def_readwrite("DistanceSquared", &FRelevanceBucketStruct::DistanceSquared)
        .def_readwrite("MinLineChecksPerFrame", &FRelevanceBucketStruct::MinLineChecksPerFrame)
        .def_readwrite("MaxLineChecksPerFrame", &FRelevanceBucketStruct::MaxLineChecksPerFrame)
        .def_readwrite("MaxIterationsPerFrame", &FRelevanceBucketStruct::MaxIterationsPerFrame)
        .def_readwrite("Relevance", &FRelevanceBucketStruct::Relevance)
  ;
}