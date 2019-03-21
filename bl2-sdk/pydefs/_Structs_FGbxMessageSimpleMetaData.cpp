#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGbxMessageSimpleMetaData()
{
    py::class_< FGbxMessageSimpleMetaData >("FGbxMessageSimpleMetaData")
        .def_readwrite("FloatData", &FGbxMessageSimpleMetaData::FloatData)
        .def_readwrite("IntData", &FGbxMessageSimpleMetaData::IntData)
        .def_readwrite("NameData", &FGbxMessageSimpleMetaData::NameData)
        .def_readwrite("VectorData", &FGbxMessageSimpleMetaData::VectorData)
  ;
}