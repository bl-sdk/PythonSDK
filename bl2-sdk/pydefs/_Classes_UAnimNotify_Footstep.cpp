#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_Footstep(py::module &m)
{
    py::class_< UAnimNotify_Footstep,  UAnimNotify   >(m, "UAnimNotify_Footstep")
		.def_static("StaticClass", &UAnimNotify_Footstep::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FootDown", &UAnimNotify_Footstep::FootDown)
          ;
}