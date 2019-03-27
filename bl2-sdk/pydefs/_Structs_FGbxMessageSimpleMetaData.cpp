#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGbxMessageSimpleMetaData(py::module &m)
{
    py::class_< FGbxMessageSimpleMetaData >(m, "FGbxMessageSimpleMetaData")
        .def_readwrite("FloatData", &FGbxMessageSimpleMetaData::FloatData)
        .def_readwrite("IntData", &FGbxMessageSimpleMetaData::IntData)
        .def_readwrite("NameData", &FGbxMessageSimpleMetaData::NameData)
        .def_readwrite("VectorData", &FGbxMessageSimpleMetaData::VectorData)
  ;
}