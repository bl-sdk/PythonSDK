#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowEmit_BloodSpray(py::module &m)
{
    py::class_< AWillowEmit_BloodSpray,  AWillowEmit_HitEffect   >(m, "AWillowEmit_BloodSpray")
          ;
}