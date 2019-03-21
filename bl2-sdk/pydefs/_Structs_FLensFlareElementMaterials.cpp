#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLensFlareElementMaterials()
{
    py::class_< FLensFlareElementMaterials >("FLensFlareElementMaterials")
        .def_readwrite("ElementMaterials", &FLensFlareElementMaterials::ElementMaterials)
  ;
}