#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MissionSmokeTest()
{
    class_< UWillowSeqAct_MissionSmokeTest, bases< USeqAct_Latent >  , boost::noncopyable>("UWillowSeqAct_MissionSmokeTest", no_init)
        .def_readwrite("SaveGameList", &UWillowSeqAct_MissionSmokeTest::SaveGameList)
        .def_readwrite("CurrentSavegame", &UWillowSeqAct_MissionSmokeTest::CurrentSavegame)
        .def_readwrite("TestStatus", &UWillowSeqAct_MissionSmokeTest::TestStatus)
        .def_readwrite("LatentFloat", &UWillowSeqAct_MissionSmokeTest::LatentFloat)
        .def("StaticClass", &UWillowSeqAct_MissionSmokeTest::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}