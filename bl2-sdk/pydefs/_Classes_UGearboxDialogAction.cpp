#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogAction(py::module &m)
{
    py::class_< UGearboxDialogAction,  UGearboxDialogNode   >(m, "UGearboxDialogAction")
        .def("eventActivate", &UGearboxDialogAction::eventActivate)
          ;
}