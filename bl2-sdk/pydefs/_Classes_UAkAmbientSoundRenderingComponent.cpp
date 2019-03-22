#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkAmbientSoundRenderingComponent(py::module &m)
{
    py::class_< UAkAmbientSoundRenderingComponent,  UPrimitiveComponent   >(m, "UAkAmbientSoundRenderingComponent")
          ;
}