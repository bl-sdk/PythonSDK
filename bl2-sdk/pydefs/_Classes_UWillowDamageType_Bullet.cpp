#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDamageType_Bullet(py::module &m)
{
    py::class_< UWillowDamageType_Bullet,  UWillowDamageType   >(m, "UWillowDamageType_Bullet")
          ;
}