#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_Scripted(py::module &m)
{
    py::class_< UAnimNotify_Scripted,  UAnimNotify   >(m, "UAnimNotify_Scripted")
		.def_static("StaticClass", &UAnimNotify_Scripted::StaticClass, py::return_value_policy::reference)
        .def("eventNotifyEnd", &UAnimNotify_Scripted::eventNotifyEnd)
        .def("eventNotify", &UAnimNotify_Scripted::eventNotify)
          ;
}