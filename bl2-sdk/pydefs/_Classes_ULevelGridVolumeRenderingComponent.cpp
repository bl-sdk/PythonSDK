#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelGridVolumeRenderingComponent(py::module &m)
{
    py::class_< ULevelGridVolumeRenderingComponent,  UPrimitiveComponent   >(m, "ULevelGridVolumeRenderingComponent")
          ;
}