#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFunction(py::object m)
{
    py::class_< UFunction,  UStruct   >(m, "UFunction")
        .def_readwrite("iNative", &UFunction::iNative)
        .def_readwrite("RepOffset", &UFunction::RepOffset)
        .def_readwrite("FriendlyName", &UFunction::FriendlyName)
        .def_readwrite("NumParms", &UFunction::NumParms)
        .def_readwrite("ParmsSize", &UFunction::ParmsSize)
        .def_readwrite("Func", &UFunction::Func)
        .def("StaticClass", &UFunction::StaticClass, py::return_value_policy::reference)
          ;
}