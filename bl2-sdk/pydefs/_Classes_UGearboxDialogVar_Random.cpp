#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogVar_Random(py::module &m)
{
    py::class_< UGearboxDialogVar_Random,  UGearboxDialogVariable   >(m, "UGearboxDialogVar_Random")
        .def_readwrite("Allegiance", &UGearboxDialogVar_Random::Allegiance)
        .def_readwrite("DistanceLimit", &UGearboxDialogVar_Random::DistanceLimit)
          ;
}