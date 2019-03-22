#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_SetCurrentProjectile(py::module &m)
{
    py::class_< UPlayerBehavior_SetCurrentProjectile,  UPlayerBehaviorBase   >(m, "UPlayerBehavior_SetCurrentProjectile")
        .def_readwrite("CurrentProjectile", &UPlayerBehavior_SetCurrentProjectile::CurrentProjectile)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_SetCurrentProjectile::ApplyBehaviorToContext)
          ;
}