#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAIBehavior(py::module &m)
{
    py::class_< UIAIBehavior,  UInterface   >(m, "UIAIBehavior")
          ;
}