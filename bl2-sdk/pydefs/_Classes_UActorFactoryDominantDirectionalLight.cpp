#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryDominantDirectionalLight(py::module &m)
{
    py::class_< UActorFactoryDominantDirectionalLight,  UActorFactory   >(m, "UActorFactoryDominantDirectionalLight")
          ;
}