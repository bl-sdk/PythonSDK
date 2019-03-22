#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AwardExperienceForMyDeath(py::module &m)
{
    py::class_< UBehavior_AwardExperienceForMyDeath,  UBehaviorBase   >(m, "UBehavior_AwardExperienceForMyDeath")
        .def("ApplyBehaviorToContext", &UBehavior_AwardExperienceForMyDeath::ApplyBehaviorToContext)
          ;
}