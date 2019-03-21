#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMetaData(py::object m)
{
    py::class_< UMetaData,  UObject   >(m, "UMetaData")
        .def_readonly("UnknownData00", &UMetaData::UnknownData00)
        .def("StaticClass", &UMetaData::StaticClass, py::return_value_policy::reference)
          ;
}