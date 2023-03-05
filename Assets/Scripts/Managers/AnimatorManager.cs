using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimatorManager
{
    private Animator _animator;
    private PlayerAnimationStates currentAnimationState;

    private int countForIdle;
      

    public void SetAnimator(Animator _animator)
    {
        this._animator = _animator;
        currentAnimationState = PlayerAnimationStates.idle;
    }

    public void SetNewAnimation(PlayerAnimationStates newState)
    {
        switch(newState)
        {
            case PlayerAnimationStates.idle:
                playIdleAnimation();
                break;
            case PlayerAnimationStates.run:
                playRunAnimation();
                break;
        }
    }

    private void playRunAnimation()
    {
        countForIdle = 0;
        //Debug.Log("in run stateer");
        if (!_animator.GetCurrentAnimatorStateInfo(0).IsName("run")) _animator.Play("run", 0);
        currentAnimationState = PlayerAnimationStates.run;
    }

    private void playIdleAnimation()
    {
        //Debug.Log(countForIdle);

        if (countForIdle>2)
        {
            if (!_animator.GetCurrentAnimatorStateInfo(0).IsName("idle")) _animator.Play("idle", 0);
            currentAnimationState = PlayerAnimationStates.idle;
        }
        else
        {
            countForIdle++;
        }
        
    }
}

public enum PlayerAnimationStates
{
    idle = 0,
    run = 1
}
