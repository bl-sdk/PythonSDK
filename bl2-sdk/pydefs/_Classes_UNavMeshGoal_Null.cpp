#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_Null()
{
    class_< UNavMeshGoal_Null, bases< UNavMeshPathGoalEvaluator >  , boost::noncopyable>("UNavMeshGoal_Null", no_init)
        .def_readwrite("PartialGoal", &UNavMeshGoal_Null::PartialGoal)
        .def("StaticClass", &UNavMeshGoal_Null::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UNavMeshGoal_Null::Recycle)
        .def("RecycleNative", &UNavMeshGoal_Null::RecycleNative)
        .def("GoUntilBust", &UNavMeshGoal_Null::GoUntilBust)
        .staticmethod("StaticClass")
  ;
}