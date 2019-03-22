#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxBuddyPlane(py::module &m)
{
    py::class_< UWillowGFxBuddyPlane,  UWillowGFxMovie   >(m, "UWillowGFxBuddyPlane")
          ;
}