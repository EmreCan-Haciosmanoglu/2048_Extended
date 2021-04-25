#include "canpch.h"
#include "Can.h"
#include "Can/EntryPoint.h"
#include "imgui.h"
#include <glm/gtc/type_ptr.hpp>
#include "GameLayer.h"

class _2048_Extended : public Can::Application
{
public:
	_2048_Extended(const Can::WindowProps& props)
		:Application(props)
	{
		ImGuiIO& io = ImGui::GetIO();
		io.Fonts->AddFontFromFileTTF("assets/fonts/Poppins/Poppins-Light.ttf", 24.0f);
		PushLayer(new GameLayer());
	}

	~_2048_Extended()
	{

	}
};

Can::Application* Can::CreateApplication(const Can::WindowProps& props)
{
	return new _2048_Extended(props);
}