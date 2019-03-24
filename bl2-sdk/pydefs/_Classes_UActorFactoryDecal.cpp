#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryDecal(py::module &m)
{
    py::class_< UActorFactoryDecal,  UActorFactory   >(m, "UActorFactoryDecal")
		.def_static("StaticClass", &UActorFactoryDecal::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DecalMaterial", &UActorFactoryDecal::DecalMaterial)
          ;
}