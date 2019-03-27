#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShadowMapTexture2D(py::module &m)
{
    py::class_< UShadowMapTexture2D,  UTexture2D   >(m, "UShadowMapTexture2D")
		.def_static("StaticClass", &UShadowMapTexture2D::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ShadowmapFlags", &UShadowMapTexture2D::ShadowmapFlags)
          ;
}