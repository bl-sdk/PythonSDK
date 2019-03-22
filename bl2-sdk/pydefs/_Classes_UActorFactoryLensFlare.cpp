#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryLensFlare(py::module &m)
{
    py::class_< UActorFactoryLensFlare,  UActorFactory   >(m, "UActorFactoryLensFlare")
        .def_readwrite("LensFlareObject", &UActorFactoryLensFlare::LensFlareObject)
          ;
}