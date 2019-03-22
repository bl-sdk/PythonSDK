#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryDecal(py::module &m)
{
    py::class_< UActorFactoryDecal,  UActorFactory   >(m, "UActorFactoryDecal")
        .def_readwrite("DecalMaterial", &UActorFactoryDecal::DecalMaterial)
          ;
}