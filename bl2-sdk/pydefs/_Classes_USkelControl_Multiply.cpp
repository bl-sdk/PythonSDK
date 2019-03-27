#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControl_Multiply(py::module &m)
{
    py::class_< USkelControl_Multiply,  USkelControlBase   >(m, "USkelControl_Multiply")
		.def_static("StaticClass", &USkelControl_Multiply::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Multiplier", &USkelControl_Multiply::Multiplier)
          ;
}