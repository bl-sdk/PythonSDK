#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryLight(py::module &m)
{
    py::class_< UActorFactoryLight,  UActorFactory   >(m, "UActorFactoryLight")
          ;
}