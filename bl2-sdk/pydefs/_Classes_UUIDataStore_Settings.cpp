#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_Settings(py::module &m)
{
    py::class_< UUIDataStore_Settings,  UUIDataStore   >(m, "UUIDataStore_Settings")
          ;
}