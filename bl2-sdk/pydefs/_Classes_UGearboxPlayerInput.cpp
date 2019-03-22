#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxPlayerInput(py::module &m)
{
    py::class_< UGearboxPlayerInput,  UPlayerInput   >(m, "UGearboxPlayerInput")
        .def("eventPlayerInput", &UGearboxPlayerInput::eventPlayerInput)
          ;
}