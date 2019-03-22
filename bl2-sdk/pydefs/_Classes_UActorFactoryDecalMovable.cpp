#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryDecalMovable(py::module &m)
{
    py::class_< UActorFactoryDecalMovable,  UActorFactoryDecal   >(m, "UActorFactoryDecalMovable")
          ;
}