#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UModel(py::object m)
{
    py::class_< UModel,  UObject   >(m, "UModel")
        .def_readonly("UnknownData00", &UModel::UnknownData00)
        .def("StaticClass", &UModel::StaticClass, py::return_value_policy::reference)
          ;
}