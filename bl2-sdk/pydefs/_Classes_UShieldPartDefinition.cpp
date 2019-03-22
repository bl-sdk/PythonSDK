#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShieldPartDefinition(py::module &m)
{
    py::class_< UShieldPartDefinition,  UEquipableItemPartDefinition   >(m, "UShieldPartDefinition")
          ;
}