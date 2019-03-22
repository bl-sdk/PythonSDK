#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicSMActor_Spawnable(py::module &m)
{
    py::class_< ADynamicSMActor_Spawnable,  ADynamicSMActor   >(m, "ADynamicSMActor_Spawnable")
          ;
}