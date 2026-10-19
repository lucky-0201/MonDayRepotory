#pragma once
class MagicalGirl
{
public:

	virtual void ShowProfile();

	virtual void Fight() = 0;

	virtual ~MagicalGirl() = default;
};

