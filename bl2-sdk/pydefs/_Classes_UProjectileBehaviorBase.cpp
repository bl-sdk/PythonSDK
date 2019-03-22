#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehaviorBase(py::module &m)
{
    py::class_< UProjectileBehaviorBase,  UBehaviorBase   >(m, "UProjectileBehaviorBase")
          ;
}