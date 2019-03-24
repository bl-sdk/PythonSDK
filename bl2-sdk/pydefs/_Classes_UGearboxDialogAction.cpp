#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogAction(py::module &m)
{
    py::class_< UGearboxDialogAction,  UGearboxDialogNode   >(m, "UGearboxDialogAction")
		.def_static("StaticClass", &UGearboxDialogAction::StaticClass, py::return_value_policy::reference)
        .def("eventActivate", &UGearboxDialogAction::eventActivate)
          ;
}