#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogVar_Other(py::module &m)
{
    py::class_< UGearboxDialogVar_Other,  UGearboxDialogVariable   >(m, "UGearboxDialogVar_Other")
        .def("StaticClass", &UGearboxDialogVar_Other::StaticClass, py::return_value_policy::reference)
          ;
}