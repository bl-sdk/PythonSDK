#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendByPosture(py::module &m)
{
    py::class_< UAnimNodeBlendByPosture,  UAnimNodeBlendList   >(m, "UAnimNodeBlendByPosture")
          ;
}