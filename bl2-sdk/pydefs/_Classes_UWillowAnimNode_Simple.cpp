#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_Simple(py::module &m)
{
    py::class_< UWillowAnimNode_Simple,  UAnimNodeAdditiveBlending   >(m, "UWillowAnimNode_Simple")
        .def_readwrite("SimpleAnimName", &UWillowAnimNode_Simple::SimpleAnimName)
        .def_readwrite("BlendInTime", &UWillowAnimNode_Simple::BlendInTime)
        .def_readwrite("BlendOutTime", &UWillowAnimNode_Simple::BlendOutTime)
        .def_readwrite("PlayRate", &UWillowAnimNode_Simple::PlayRate)
        .def_readwrite("Style", &UWillowAnimNode_Simple::Style)
        .def_readwrite("MyTree", &UWillowAnimNode_Simple::MyTree)
        .def_readwrite("LinkTree", &UWillowAnimNode_Simple::LinkTree)
        .def_readwrite("LinkName", &UWillowAnimNode_Simple::LinkName)
        .def_readwrite("SeqNode", &UWillowAnimNode_Simple::SeqNode)
        .def_readwrite("CachedAnimPlayer", &UWillowAnimNode_Simple::CachedAnimPlayer)
        .def("SetBlendTarget", &UWillowAnimNode_Simple::SetBlendTarget)
        .def("PlayingSimpleAnim", &UWillowAnimNode_Simple::PlayingSimpleAnim)
        .def("GetSimpleAnimIndex", &UWillowAnimNode_Simple::GetSimpleAnimIndex)
        .def("StopSimpleAnim", &UWillowAnimNode_Simple::StopSimpleAnim)
        .def("PlaySimpleAnim", &UWillowAnimNode_Simple::PlaySimpleAnim)
        .def("UpdateSimpleAnims", &UWillowAnimNode_Simple::UpdateSimpleAnims)
        .def("UncacheSimpleAnims", &UWillowAnimNode_Simple::UncacheSimpleAnims)
        .def("CacheSimpleAnims", &UWillowAnimNode_Simple::CacheSimpleAnims)
        .def("Stop", &UWillowAnimNode_Simple::Stop)
        .def("Play", &UWillowAnimNode_Simple::Play)
          ;
}