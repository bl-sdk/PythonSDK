#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogVar_Passenger(py::module &m)
{
    py::class_< UWillowDialogVar_Passenger,  UGearboxDialogVariable   >(m, "UWillowDialogVar_Passenger")
		.def_static("StaticClass", &UWillowDialogVar_Passenger::StaticClass, py::return_value_policy::reference)
          ;
}