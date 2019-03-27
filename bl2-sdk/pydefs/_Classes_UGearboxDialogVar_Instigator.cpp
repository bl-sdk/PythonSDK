#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogVar_Instigator(py::module &m)
{
    py::class_< UGearboxDialogVar_Instigator,  UGearboxDialogVariable   >(m, "UGearboxDialogVar_Instigator")
		.def_static("StaticClass", &UGearboxDialogVar_Instigator::StaticClass, py::return_value_policy::reference)
          ;
}