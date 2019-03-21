#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxPlayerInput(py::object m)
{
    py::class_< UGearboxPlayerInput,  UPlayerInput   >(m, "UGearboxPlayerInput")
        .def("StaticClass", &UGearboxPlayerInput::StaticClass, py::return_value_policy::reference)
        .def("eventPlayerInput", &UGearboxPlayerInput::eventPlayerInput)
          ;
}