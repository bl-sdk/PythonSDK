#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBuzzaxeWeaponTypeDefinition(py::module &m)
{
    py::class_< UBuzzaxeWeaponTypeDefinition,  UWeaponTypeDefinition   >(m, "UBuzzaxeWeaponTypeDefinition")
          ;
}