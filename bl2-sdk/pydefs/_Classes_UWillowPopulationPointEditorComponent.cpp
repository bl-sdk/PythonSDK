#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPopulationPointEditorComponent(py::module &m)
{
    py::class_< UWillowPopulationPointEditorComponent,  UPrimitiveComponent   >(m, "UWillowPopulationPointEditorComponent")
          ;
}