#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInputActionDefinition(py::module &m)
{
    py::class_< UInputActionDefinition,  UGBXDefinition   >(m, "UInputActionDefinition")
        .def_readwrite("OnBegin", &UInputActionDefinition::OnBegin)
        .def_readwrite("OnEnd", &UInputActionDefinition::OnEnd)
        .def_readwrite("ActionName", &UInputActionDefinition::ActionName)
        .def("StaticClass", &UInputActionDefinition::StaticClass, py::return_value_policy::reference)
          ;
}