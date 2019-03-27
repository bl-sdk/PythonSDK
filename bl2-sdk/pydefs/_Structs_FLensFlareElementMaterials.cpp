#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLensFlareElementMaterials(py::module &m)
{
    py::class_< FLensFlareElementMaterials >(m, "FLensFlareElementMaterials")
        .def_readwrite("ElementMaterials", &FLensFlareElementMaterials::ElementMaterials)
  ;
}